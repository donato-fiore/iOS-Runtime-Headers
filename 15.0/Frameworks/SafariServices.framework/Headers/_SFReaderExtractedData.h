// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFREADEREXTRACTEDDATA_H
#define _SFREADEREXTRACTEDDATA_H

@class NSString, NSData, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFReaderExtractedData : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *author; // ivar: _author
@property (readonly, nonatomic) NSData *body; // ivar: _body
@property (readonly, nonatomic) NSURL *mainImageURL; // ivar: _mainImageURL
@property (readonly, copy, nonatomic) NSString *publishedDate; // ivar: _publishedDate
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)_initWithAuthor:(id)arg0 body:(id)arg1 publishedDate:(id)arg2 title:(id)arg3 mainImageURL:(id)arg4 url:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReaderContent:(id)arg0 url:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif