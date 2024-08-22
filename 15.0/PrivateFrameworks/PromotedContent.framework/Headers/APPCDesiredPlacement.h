// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCDESIREDPLACEMENT_H
#define APPCDESIREDPLACEMENT_H

@protocol APPCPromotableDesiredPlacement;

#import <Foundation/Foundation.h>


@interface APPCDesiredPlacement : NSObject <APPCPromotableDesiredPlacement>



@property (nonatomic, readonly) NSInteger count; // ivar: count
@property (nonatomic, readonly) NSInteger type; // ivar: type


-(id)init;
-(id)initWithType:(NSInteger)arg0 count:(NSInteger)arg1 ;


@end


#endif