// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOLIBRARYLOCALDEFAULTS_H
#define PXPHOTOLIBRARYLOCALDEFAULTS_H

@class PHPhotoLibraryAppPrivateData;


#import "PXObservable.h"

@interface PXPhotoLibraryLocalDefaults : PXObservable {
    PHPhotoLibraryAppPrivateData *_appPrivateData;
}




-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryWithValuesForKeys:(id)arg0 ;
-(id)identifiersForKey:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_notifyObserversDidChangeValueForKey:(id)arg0 ;
-(void)addIdentifier:(id)arg0 forKey:(id)arg1 ;
-(void)removeIdentifier:(id)arg0 forKey:(id)arg1 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setIdentifiers:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif