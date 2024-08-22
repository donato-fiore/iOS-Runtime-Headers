// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCHOICEROW_H
#define PTCHOICEROW_H

@class NSString, NSArray;
@protocol PTChoiceRowDataSource;


#import "PTSRow.h"

@interface PTChoiceRow : PTSRow

@property (retain, nonatomic) NSString *choiceIdentifier; // ivar: _choiceIdentifier
@property (weak, nonatomic) NSObject<PTChoiceRowDataSource> *dataSource; // ivar: _dataSource
@property (copy, nonatomic) NSArray *possibleShortTitles; // ivar: _possibleShortTitles
@property (copy, nonatomic) NSArray *possibleTitles; // ivar: _possibleTitles
@property (copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues


+(BOOL)supportsSecureCoding;
-(BOOL)isEncodable;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)possibleShortTitles:(id)arg0 ;
-(id)possibleValues:(id)arg0 titles:(id)arg1 ;
-(id)shortTitleForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)titleForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)titleForSection:(NSInteger)arg0 ;
-(id)valueForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif