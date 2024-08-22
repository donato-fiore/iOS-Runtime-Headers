// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWCONFIGURATION_H
#define SWCONFIGURATION_H

@class NSString, NSDictionary, NSLocale, NSURL;
@protocol NSMutableCopying, SWLocation;

#import <Foundation/Foundation.h>


@interface SWConfiguration : NSObject <NSMutableCopying>



@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (copy, nonatomic) NSDictionary *dataSources; // ivar: _dataSources
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (copy, nonatomic) NSObject<SWLocation> *location; // ivar: _location
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (copy, nonatomic) NSString *storeFront; // ivar: _storeFront
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStoreFront:(id)arg0 locale:(id)arg1 contentSizeCategory:(id)arg2 canvasSize:(struct CGSize )arg3 contentFrame:(struct CGRect )arg4 dataSources:(id)arg5 location:(id)arg6 sourceURL:(id)arg7 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif