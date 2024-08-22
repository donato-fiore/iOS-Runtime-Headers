// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINIB_H
#define UINIB_H


#import <Foundation/Foundation.h>


@interface UINib : NSObject {
    id *storage;
}




+(id)nibWithData:(id)arg0 bundle:(id)arg1 ;
+(id)nibWithNibName:(id)arg0 bundle:(id)arg1 ;
-(BOOL)captureEnclosingNIBBundleOnDecode;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(BOOL)instantiatingForSimulator;
-(id)bundleResourcePath;
-(id)effectiveBundle;
-(id)identifierForStringsFile;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 directory:(id)arg1 bundle:(id)arg2 ;
-(id)instantiateWithOwner:(id)arg0 options:(id)arg1 ;
-(id)lazyArchiveData;
-(id)nibDataForPath:(id)arg0 ;
-(id)unarchiverForInstantiatingReturningError:(*id)arg0 ;
-(void)_registerForMemoryWarningIfNeeded;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg0 ;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg0 ;
-(void)setIdentifierForStringsFile:(id)arg0 ;
-(void)setInstantiatingForSimulator:(BOOL)arg0 ;


@end


#endif