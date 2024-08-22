// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCESTOCK_H
#define TSCESTOCK_H

@class TSUSparseArray, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface TSCEStock : NSObject

@property (readonly, nonatomic) TSUSparseArray *attributes; // ivar: _attributes
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *dateString;
@property (retain, nonatomic) NSString *symbol; // ivar: _symbol
@property (readonly, nonatomic) BOOL up;


+(id)kNilStockAttributeString;
+(id)nativeLocaleIdentifier;
+(id)stockFromArchive:(*void)arg0 ;
+(id)stockWithAttributes:(id)arg0 ;
-(id)abbreviatedNumberForAttribute:(NSInteger)arg0 atLocale:(id)arg1 ;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithSymbol:(id)arg0 ;
-(id)valueForAttribute:(NSInteger)arg0 ;
-(id)valueForAttribute:(NSInteger)arg0 forLocale:(id)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)p_populateAttributesFromArray:(id)arg0 ;
-(void)p_setFormattedAttr:(NSInteger)arg0 fromArray:(id)arg1 ;


@end


#endif