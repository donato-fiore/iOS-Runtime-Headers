// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IFSYMBOL_H
#define IFSYMBOL_H

@class NSURL, CUICatalog, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IFSymbol : NSObject <NSSecureCoding>



@property (readonly) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly) CUICatalog *catalog; // ivar: _catalog
@property os_unfair_lock_s lock; // ivar: _lock
@property (readonly) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)coreGlyphsCatalog;
+(id)coreGlyphsPrivateCatalog;
-(id)imageForDescriptor:(id)arg0 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 bundleURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif