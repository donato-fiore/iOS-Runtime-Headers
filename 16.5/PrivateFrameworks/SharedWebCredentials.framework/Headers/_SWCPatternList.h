// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCPATTERNLIST_H
#define _SWCPATTERNLIST_H

@protocol SWCRedactedDescription, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding>

 {
    SWCPatternStorage _storage;
}


@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)patternListWithArray:(id)arg0 ;
+(id)patternListWithDetailsDictionary:(id)arg0 ;
+(id)patternListWithDetailsDictionary:(id)arg0 defaults:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)evaluateWithURLComponents:(id)arg0 substitutionVariables:(id)arg1 auditToken:(struct ? *)arg2 matchingPattern:(*id)arg3 index:(*NSUInteger)arg4 ;
-(NSUInteger)hash;
-(id)_descriptionDebug:(BOOL)arg0 redacted:(BOOL)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePatternsWithBlock:(id)arg0 ;


@end


#endif