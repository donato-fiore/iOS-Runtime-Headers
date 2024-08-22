// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIIMAGENIBPLACEHOLDER_H
#define UIIMAGENIBPLACEHOLDER_H

@class NSString;
@protocol NSCoding;


#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"

@interface UIImageNibPlaceholder : UIImage <NSCoding>

 {
    NSString *runtimeResourceName;
    NSString *systemSymbolResourceName;
}


@property (copy, nonatomic) NSString *resourceCatalogName; // ivar: _resourceCatalogName
@property (nonatomic) NSInteger resourceRenderingMode; // ivar: _resourceRenderingMode
@property (copy, nonatomic) UIImageSymbolConfiguration *resourceSymbolImageConfiguration; // ivar: _resourceSymbolImageConfiguration


-(id)_initWithOtherImage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 andRuntimeResourceName:(id)arg1 ;
-(id)initWithData:(id)arg0 andRuntimeResourceName:(id)arg1 ;
-(id)initWithRuntimeSystemSymbolResourceName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif