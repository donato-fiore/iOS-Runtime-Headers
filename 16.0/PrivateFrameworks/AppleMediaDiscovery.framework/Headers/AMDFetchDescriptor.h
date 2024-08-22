// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDFETCHDESCRIPTOR_H
#define AMDFETCHDESCRIPTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMDFetchDescriptor : NSObject

@property (retain, nonatomic) NSArray *_columnSpecs; // ivar: __columnSpecs
@property (nonatomic) NSInteger _domain; // ivar: __domain
@property (retain, nonatomic) NSString *_id; // ivar: __id
@property (nonatomic) int _keyColumn; // ivar: __keyColumn
@property (nonatomic) int _listColumn; // ivar: __listColumn
@property (nonatomic) char _saveAsType; // ivar: __saveAsType
@property (retain, nonatomic) NSString *_statement; // ivar: __statement
@property (nonatomic) int _valueColumn; // ivar: __valueColumn


+(char)getCodeForSaveAsType:(id)arg0 ;
+(id)extractPart:(id)arg0 from:(id)arg1 required:(BOOL)arg2 error:(*id)arg3 ;
+(id)refreshAggregationDescriptors:(id)arg0 forDomain:(id)arg1 error:(*id)arg2 ;
-(BOOL)isPersistable;
-(NSInteger)getDomain;
-(id)getColumnSpecs;
-(id)getId;
-(id)getStatement;
-(id)initWithDict:(id)arg0 usingSchema:(id)arg1 error:(*id)arg2 ;
-(id)persist:(id)arg0 error:(*id)arg1 ;
-(id)persistObject:(id)arg0 error:(*id)arg1 ;
-(void)setDomain:(NSInteger)arg0 ;


@end


#endif