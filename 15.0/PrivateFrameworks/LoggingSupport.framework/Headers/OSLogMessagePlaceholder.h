// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGMESSAGEPLACEHOLDER_H
#define OSLOGMESSAGEPLACEHOLDER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface OSLogMessagePlaceholder : NSObject {
    *os_log_fmt_cspec_s _placeholder;
    NSString *_placeholderString;
    NSArray *_placeholderTokens;
}


@property (readonly, nonatomic) int precision;
@property (readonly, nonatomic) NSString *rawString;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *typeNamespace;
@property (readonly, nonatomic) int width;


-(id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s *)arg0 ;
-(void)dealloc;


@end


#endif