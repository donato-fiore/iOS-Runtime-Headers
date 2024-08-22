// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTBRAILLESTRING_H
#define BRLTBRAILLESTRING_H

@class NSMutableArray, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRLTBrailleString : NSObject <NSCopying>

 {
    NSMutableArray *_brailleChars;
}


@property (readonly, nonatomic) NSArray *brailleChars;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSString *unicode;


+(BOOL)isValidBRF:(id)arg0 ;
+(id)brfTable;
+(id)brfToUnicode:(id)arg0 ;
+(id)dinToUnicode:(id)arg0 ;
+(id)unicodeToBestEffortBrf:(id)arg0 ;
+(id)unicodeToDin:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBrailleString:(id)arg0 ;
-(id)bestEffortBrf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBrailleChars:(id)arg0 ;
-(id)initWithBrf:(id)arg0 ;
-(id)initWithUnicode:(id)arg0 ;


@end


#endif