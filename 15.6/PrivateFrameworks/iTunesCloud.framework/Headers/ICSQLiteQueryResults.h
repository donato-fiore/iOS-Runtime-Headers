// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSQLITEQUERYRESULTS_H
#define ICSQLITEQUERYRESULTS_H

@class NSString, NSNumber;
@protocol ICSQLiteBinding;

#import <Foundation/Foundation.h>

#import "ICSQLiteStatement.h"

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding>

 {
    ICSQLiteStatement *_statement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, copy, nonatomic) NSString *firstStringValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStatement:(id)arg0 ;
-(int)clearBindings;
-(void)bindData:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDataCopy:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDouble:(CGFloat)arg0 atPosition:(int)arg1 ;
-(void)bindFloat:(float)arg0 atPosition:(int)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atPosition:(int)arg1 ;
-(void)bindInt:(int)arg0 atPosition:(int)arg1 ;
-(void)bindNullAtPosition:(int)arg0 ;
-(void)bindNumber:(id)arg0 atPosition:(int)arg1 ;
-(void)bindString:(id)arg0 atPosition:(int)arg1 ;
-(void)bindStringCopy:(id)arg0 atPosition:(int)arg1 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;


@end


#endif