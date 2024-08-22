// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTODAYMARKASREADTRANSACTION_H
#define FCTODAYMARKASREADTRANSACTION_H

@class NSString, NSDate;
@protocol FCTodayPrivateDataTransaction;

#import <Foundation/Foundation.h>


@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction>



@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (nonatomic) NSInteger articleVersion; // ivar: _articleVersion
@property (copy, nonatomic) NSDate *readDate; // ivar: _readDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleID:(id)arg0 articleVersion:(NSInteger)arg1 readDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithPrivateDataContext:(id)arg0 ;
-(void)performWithTodayPrivateData:(id)arg0 ;


@end


#endif