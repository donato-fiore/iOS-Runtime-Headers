// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCDALLCONTAINERSPREDICATE_H
#define CNCDALLCONTAINERSPREDICATE_H

@class NSString;
@protocol CNCDContainerPredicate;


#import "CNPredicate.h"

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeDisabledContainers; // ivar: _includeDisabledContainers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)cn_persistenceFilterRequest;
-(id)cn_topLevelFilter;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncludeDisabledContainers:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif