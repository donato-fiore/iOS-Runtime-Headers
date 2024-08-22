// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAPACKAGE_H
#define CAPACKAGE_H


#import <Foundation/Foundation.h>

#import "CALayer.h"

@interface CAPackage : NSObject {
    *_CAPackageData _data;
}


@property (readonly, getter=isGeometryFlipped) BOOL geometryFlipped;
@property (readonly) CALayer *rootLayer;


+(id)packageWithContentsOfURL:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)packageWithData:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(Class)CAMLParser:(id)arg0 didFailToFindClassWithName:(id)arg1 ;
-(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
-(id)CAMLParser:(id)arg0 resourceForURL:(id)arg1 ;
-(id)_initWithContentsOfURL:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_initWithData:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)publishedObjectNames;
-(id)publishedObjectWithName:(id)arg0 ;
-(id)substitutedClasses;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;
-(void)CAMLParser:(id)arg0 didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(void)_addClassSubstitutions:(id)arg0 ;
-(void)_readFromArchiveData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)_readFromCAMLData:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)_readFromCAMLURL:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)foreachLayer:(id)arg0 ;


@end


#endif