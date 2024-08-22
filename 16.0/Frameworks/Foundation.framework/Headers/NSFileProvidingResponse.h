// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEPROVIDINGRESPONSE_H
#define NSFILEPROVIDINGRESPONSE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSError.h"
#import "NSString.h"

@interface NSFileProvidingResponse : NSObject <NSSecureCoding>



@property (retain) NSError *error; // ivar: error
@property NSUInteger providedItemRecursiveGenerationCount; // ivar: providedItemRecursiveGenerationCount
@property (copy) NSString *sandboxToken; // ivar: sandboxToken


+(BOOL)supportsSecureCoding;
+(id)responseWithError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif