// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCPATTERN_H
#define _SWCPATTERN_H

@class NSString;
@protocol SWCRedactedDescription;

#import <Foundation/Foundation.h>


@interface _SWCPattern : NSObject <SWCRedactedDescription>

 {
    BOOL _freeWhenDone;
}


@property (readonly, getter=isBlocking) BOOL blocking;
@property (readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property (readonly, getter=isPercentEncoded) BOOL percentEncoded;
@property (readonly) NSString *requiredEntitlement;
@property (nonatomic) *SWCPatternStorage storage; // ivar: _storage


+(id)_debug:(BOOL)arg0 descriptionOfStorage:(struct SWCPatternStorage *)arg1 forObject:(id)arg2 redacted:(BOOL)arg3 ;
+(id)_normalizedURLPath:(id)arg0 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)evaluateWithURLComponents:(id)arg0 substitutionVariables:(id)arg1 auditToken:(struct ? *)arg2 ;
-(NSUInteger)hash;
-(id)_initWithPatternStorageNoCopy:(struct SWCPatternStorage *)arg0 freeWhenDone:(BOOL)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 defaults:(id)arg1 ;
-(id)initWithPathPattern:(id)arg0 defaults:(id)arg1 ;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif