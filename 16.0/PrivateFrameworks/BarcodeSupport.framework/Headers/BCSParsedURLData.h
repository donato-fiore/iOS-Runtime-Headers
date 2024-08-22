// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSPARSEDURLDATA_H
#define BCSPARSEDURLDATA_H

@class NSString, NSURL;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText; // ivar: _extraPreviewText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *preferredBundleID; // ivar: _preferredBundleID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 type:(NSInteger)arg1 extraPreviewText:(id)arg2 ;
-(id)initWithURL:(id)arg0 type:(NSInteger)arg1 extraPreviewText:(id)arg2 preferredBundleID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif