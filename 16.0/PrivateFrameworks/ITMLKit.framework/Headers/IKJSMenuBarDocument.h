// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSMENUBARDOCUMENT_H
#define IKJSMENUBARDOCUMENT_H

@protocol IKJSMenuBarDocument, IKJSMenuBarDocumentAppBridge;


#import "IKJSObject.h"

@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument>



@property (weak, nonatomic) NSObject<IKJSMenuBarDocumentAppBridge> *appBridge; // ivar: _appBridge


-(id)_entityUniqueIdentifierForObject:(id)arg0 ;
-(id)getDocument:(id)arg0 ;
-(id)getSelectedItem;
-(void)setDocument:(id)arg0 ;
-(void)setSelectedItem:(id)arg0 ;


@end


#endif