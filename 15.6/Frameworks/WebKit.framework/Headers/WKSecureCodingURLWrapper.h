// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSECURECODINGURLWRAPPER_H
#define WKSECURECODINGURLWRAPPER_H

@class NSURL;
@protocol NSSecureCoding;



@interface WKSecureCodingURLWrapper : NSURL <NSSecureCoding>

 {
    RetainPtr<NSURL> m_wrappedURL;
}


@property (readonly, nonatomic) NSURL *wrappedURL;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif