// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSNAVIGATIONDOCUMENT_H
#define IKJSNAVIGATIONDOCUMENT_H

@class NSString, NSArray;
@protocol IKJSNavigationDocument, IKAppNavigationController;


#import "IKJSObject.h"

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument>

 {
    ? _delegateSelectors;
}


@property (readonly) NSString *OPTION_RETAIN_CONTEXT;
@property (readonly, retain, nonatomic) NSArray *documents;
@property (readonly, weak, nonatomic) NSObject<IKAppNavigationController> *navigationControllerDelegate; // ivar: _navigationControllerDelegate


-(id)_makeAppDocumentWithDocument:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 navigationController:(id)arg1 ;
-(void)_migrateMediaControllerFromDocument:(id)arg0 toDocument:(id)arg1 ;
-(void)clear;
-(void)dismissModal;
-(void)insertBeforeDocument:(id)arg0 ;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popToRootDocument;
-(void)presentModal:(id)arg0 ;
-(void)pushDocument:(id)arg0 ;
-(void)removeDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 ;


@end


#endif