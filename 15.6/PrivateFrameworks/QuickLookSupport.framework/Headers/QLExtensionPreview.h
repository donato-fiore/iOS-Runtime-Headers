// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLEXTENSIONPREVIEW_H
#define QLEXTENSIONPREVIEW_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLExtensionPreview : NSObject <NSSecureCoding>



@property (copy) NSString *previewDescription; // ivar: _previewDescription


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescription:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif