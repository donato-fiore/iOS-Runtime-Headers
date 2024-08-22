// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISALIASICON_H
#define ISALIASICON_H

@class NSArray;


#import "ISConcreteIcon.h"

@interface ISAliasIcon : ISConcreteIcon {
    NSArray *_decorations;
}


@property (readonly) id *alias; // ivar: _alias
@property (readonly) ISConcreteIcon *icon; // ivar: _icon
@property (readonly) ISConcreteIcon *resolvedIcon; // ivar: _resolvedIcon


+(BOOL)supportsSecureCoding;
+(id)_iconForBookmarkData:(id)arg0 ;
+(id)_iconForValues:(id)arg0 ;
-(id)decorations;
-(id)description;
-(id)initWithAliasURL:(id)arg0 ;
-(id)initWithBookmarkData:(id)arg0 ;
-(id)initWithBookmarkData:(id)arg0 decorations:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolve;


@end


#endif