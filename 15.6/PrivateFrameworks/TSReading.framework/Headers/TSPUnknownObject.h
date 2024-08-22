// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPUNKNOWNOBJECT_H
#define TSPUNKNOWNOBJECT_H

@class NSString;
@protocol OS_dispatch_data;


#import "TSPObject.h"

@interface TSPUnknownObject : TSPObject {
    NSString *_packageLocator;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // ivar: _serializedData


-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(void)willModify;
-(void)willModifyForUpgrade;


@end


#endif