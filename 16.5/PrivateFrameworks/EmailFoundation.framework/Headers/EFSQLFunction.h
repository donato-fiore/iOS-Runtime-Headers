// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLFUNCTION_H
#define EFSQLFUNCTION_H

@class NSArray, NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLFunction : NSObject <EFSQLValueExpressable>



@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)abs:(id)arg0 ;
+(id)char:(id)arg0 ;
+(id)coalesce:(id)arg0 ;
+(id)glob:(id)arg0 expression:(id)arg1 ;
+(id)hex:(id)arg0 ;
+(id)ifNull:(id)arg0 second:(id)arg1 ;
+(id)inStr:(id)arg0 second:(id)arg1 ;
+(id)length:(id)arg0 ;
+(id)like:(id)arg0 expression:(id)arg1 ;
+(id)like:(id)arg0 expression:(id)arg1 escape:(unsigned short)arg2 ;
+(id)likely:(id)arg0 ;
+(id)lower:(id)arg0 ;
+(id)ltrim:(id)arg0 pattern:(id)arg1 ;
+(id)max:(id)arg0 ;
+(id)min:(id)arg0 ;
+(id)nullIf:(id)arg0 second:(id)arg1 ;
+(id)replace:(id)arg0 pattern:(id)arg1 replacement:(id)arg2 ;
+(id)round:(id)arg0 digits:(id)arg1 ;
+(id)rtrim:(id)arg0 pattern:(id)arg1 ;
+(id)substr:(id)arg0 index:(id)arg1 length:(id)arg2 ;
+(id)trim:(id)arg0 pattern:(id)arg1 ;
+(id)typeOf:(id)arg0 ;
+(id)unlikely:(id)arg0 ;
+(id)upper:(id)arg0 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithName:(id)arg0 arguments:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif