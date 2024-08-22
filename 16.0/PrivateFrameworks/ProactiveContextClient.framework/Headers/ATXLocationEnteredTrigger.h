// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCATIONENTEREDTRIGGER_H
#define ATXLOCATIONENTEREDTRIGGER_H

@class NSString;
@protocol ATXTrigger;

#import <Foundation/Foundation.h>


@interface ATXLocationEnteredTrigger : NSObject <ATXTrigger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *locationIdentifier; // ivar: _locationIdentifier
@property (readonly, nonatomic) NSUInteger namedLOI; // ivar: _namedLOI
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationIdentifier:(id)arg0 namedLOI:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif