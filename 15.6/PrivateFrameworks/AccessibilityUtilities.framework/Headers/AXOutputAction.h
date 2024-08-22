// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXOUTPUTACTION_H
#define AXOUTPUTACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXIndexMap.h"

@interface AXOutputAction : NSObject <NSCopying>



@property (retain, nonatomic) NSString *brailleString; // ivar: _brailleString
@property (nonatomic) BOOL generatesBraille; // ivar: _generatesBraille
@property (readonly, nonatomic) NSString *originalString; // ivar: _originalString
@property (readonly, nonatomic) NSUInteger outputActionID; // ivar: _outputActionID
@property (readonly, nonatomic) AXIndexMap *outputVariants; // ivar: _variants
@property (nonatomic) BOOL performPunctuationTranslation; // ivar: _performPunctuationTranslation
@property (readonly, nonatomic) _NSRange rangeOfString; // ivar: _rangeOfString
@property (nonatomic) BOOL replaceCommas; // ivar: _replaceCommas
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) BOOL wasDivided; // ivar: _wasDivided


+(NSUInteger)newOutputActionID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAXAction:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 brailleString:(id)arg1 ;
-(id)objectForVariant:(NSInteger)arg0 ;
-(void)removeObjectForVariant:(NSInteger)arg0 ;
-(void)setObject:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif