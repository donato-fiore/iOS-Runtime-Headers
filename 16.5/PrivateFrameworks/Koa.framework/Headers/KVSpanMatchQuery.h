// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSPANMATCHQUERY_H
#define KVSPANMATCHQUERY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface KVSpanMatchQuery : NSObject {
    NSInteger _locale;
    NSString *_cleanText;
}


@property (readonly, nonatomic) shared_ptr<skitbridge::Query> query; // ivar: _query


+(void)initialize;
-(BOOL)isFieldTypeIncluded:(NSInteger)arg0 ;
-(BOOL)isItemTypeIncluded:(NSInteger)arg0 ;
-(id)cleanText;
-(id)description;
-(id)init;
-(id)initWithQuery:(*void)arg0 locale:(NSInteger)arg1 cleanText:(id)arg2 ;
-(id)locale;
-(void)setIncludedFieldTypes:(id)arg0 ;
-(void)setIncludedItemTypes:(id)arg0 ;


@end


#endif