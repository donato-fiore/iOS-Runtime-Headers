// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIITEMPROVIDER_H
#define UIITEMPROVIDER_H

@class NSItemProvider, NSDate, NSString, NSNumber, NSDictionary;



@interface UIItemProvider : NSItemProvider

@property (nonatomic) CGSize estimatedDisplayedSize;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSDictionary *teamMetadata; // ivar: _teamMetadata


-(BOOL)canCreateObjectOfClass:(Class)arg0 ;
-(BOOL)canInstantiateObjectOfClass:(Class)arg0 ;
-(BOOL)copyFileRepresentationForTypeIdentifier:(id)arg0 toURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createObjectOfClass:(Class)arg0 completionBlock:(id)arg1 ;
-(id)createObjectOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg0 inPlace:(*BOOL)arg1 error:(*id)arg2 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithPBItem:(id)arg0 ;
-(id)initWithPBItem:(id)arg0 secureRetryHandler:(id)arg1 ;
-(id)instantiateObjectOfClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)loadObjectOfClass:(Class)arg0 completionHandler:(id)arg1 ;
-(void)copyDataRepresentationForTypeIdentifier:(id)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(void)copyFileRepresentationForTypeIdentifier:(id)arg0 toURL:(id)arg1 options:(id)arg2 completionBlock:(id)arg3 ;
-(void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(void)instantiateObjectOfClass:(Class)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg0 loadHandler:(id)arg1 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg0 options:(id)arg1 loadHandler:(id)arg2 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg0 fileOptions:(NSInteger)arg1 loadHandler:(id)arg2 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg0 fileOptions:(NSInteger)arg1 options:(id)arg2 loadHandler:(id)arg3 ;
-(void)registerObject:(id)arg0 options:(id)arg1 ;
-(void)registerObjectOfClass:(Class)arg0 options:(id)arg1 loadHandler:(id)arg2 ;


@end


#endif