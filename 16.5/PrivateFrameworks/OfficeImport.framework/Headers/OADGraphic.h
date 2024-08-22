// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADGRAPHIC_H
#define OADGRAPHIC_H



#import "OADDrawable.h"
#import "OADGraphic.h"

@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}




-(id)description;
-(id)geometry;
-(id)graphicProperties;
-(id)masterGraphic;
-(void)setMasterGraphic:(id)arg0 ;


@end


#endif