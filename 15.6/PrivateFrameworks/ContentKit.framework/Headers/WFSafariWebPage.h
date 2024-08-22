// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSAFARIWEBPAGE_H
#define WFSAFARIWEBPAGE_H

@class NSURL, NSData, NSString;
@protocol NSCopying, WFNaming, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSData *documentHTML; // ivar: _documentHTML
@property (readonly, copy, nonatomic) NSString *pageTitle; // ivar: _pageTitle
@property (readonly, copy, nonatomic) NSData *selectionHTML;
@property (readonly, copy, nonatomic) NSString *selectionText;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 pageTitle:(id)arg1 documentHTML:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif