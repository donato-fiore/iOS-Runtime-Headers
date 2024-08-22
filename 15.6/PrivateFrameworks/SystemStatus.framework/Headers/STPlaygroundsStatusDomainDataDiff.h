// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STPLAYGROUNDSSTATUSDOMAINDATADIFF_H
#define STPLAYGROUNDSSTATUSDOMAINDATADIFF_H

@class NSString, NSNumber;
@protocol STStatusDomainDataDiff;

#import <Foundation/Foundation.h>


@interface STPlaygroundsStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *playgroundsActiveChangedValue; // ivar: _playgroundsActiveChangedValue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg0 toData:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dataByApplyingToData:(id)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaygroundsActiveChangedValue:(id)arg0 ;
-(void)applyToMutableData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif