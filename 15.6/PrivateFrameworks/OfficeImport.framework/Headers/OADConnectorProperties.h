// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADCONNECTORPROPERTIES_H
#define OADCONNECTORPROPERTIES_H



#import "OADShapeProperties.h"
#import "OADConnection.h"

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}




+(id)defaultProperties;
-(id)description;
-(id)from;
-(id)init;
-(id)initWithDefaults;
-(id)to;


@end


#endif