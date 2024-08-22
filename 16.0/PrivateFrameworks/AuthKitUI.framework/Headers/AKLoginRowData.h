// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLOGINROWDATA_H
#define AKLOGINROWDATA_H

@class NSString, UIImage;
@protocol _ASAuthenticationProviderLoginRowData;

#import <Foundation/Foundation.h>


@interface AKLoginRowData : NSObject <_ASAuthenticationProviderLoginRowData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger loginRowAuthenticationType; // ivar: _authenticationType
@property (copy, nonatomic) NSString *loginRowDetailText; // ivar: _detailText
@property (copy, nonatomic) UIImage *loginRowIconImage; // ivar: _iconImage
@property (copy, nonatomic) NSString *loginRowPaneTitleText; // ivar: _paneTitleText
@property (copy, nonatomic) NSString *loginRowText; // ivar: _titleText
@property (readonly) Class superclass;


-(id)initWithIconImage:(id)arg0 paneTitleText:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 authenticationType:(NSInteger)arg4 ;


@end


#endif