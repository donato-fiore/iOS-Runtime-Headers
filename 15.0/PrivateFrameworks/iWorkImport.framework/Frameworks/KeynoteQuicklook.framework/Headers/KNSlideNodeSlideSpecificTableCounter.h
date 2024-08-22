// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNSLIDENODESLIDESPECIFICTABLECOUNTER_H
#define KNSLIDENODESLIDESPECIFICTABLECOUNTER_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface KNSlideNodeSlideSpecificTableCounter : NSObject

@property (readonly, nonatomic) NSUInteger linkCount; // ivar: _linkCount
@property (readonly, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSUUID *tableInfoUUID; // ivar: _tableInfoUUID


-(id)description;
-(id)initWithTableInfoUUID:(id)arg0 andLinkCount:(NSUInteger)arg1 ;
-(void)decrement;
-(void)increment;


@end


#endif