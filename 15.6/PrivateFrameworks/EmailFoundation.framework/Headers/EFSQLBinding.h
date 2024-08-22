// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLBINDING_H
#define EFSQLBINDING_H

@class NSString;
@protocol EFSQLBindable;

#import <Foundation/Foundation.h>

#import "EFSQLBinding.h"

@interface EFSQLBinding : NSObject <EFSQLBindable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bindingWithData:(id)arg0 ;
+(id)bindingWithDouble:(CGFloat)arg0 ;
+(id)bindingWithInt64:(NSInteger)arg0 ;
+(id)bindingWithString:(id)arg0 ;
+(id)nullBinding;
-(void)bindTo:(struct sqlite3_stmt *)arg0 withSQLIndex:(int)arg1 ;
-(void)bindToStatement:(id)arg0 usingIndex:(NSUInteger)arg1 ;
-(void)bindToStatement:(id)arg0 usingName:(id)arg1 ;


@end


#endif