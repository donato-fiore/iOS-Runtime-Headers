// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKSIGNATUREMODELCONTROLLER_H
#define AKSIGNATUREMODELCONTROLLER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "AKController.h"
#import "AKSignature.h"

@interface AKSignatureModelController : NSObject {
    int _nextUID;
    BOOL _signaturesDecryptionAttempted;
    NSMutableArray *_signatures;
}


@property (weak) AKController *controller; // ivar: _controller
@property (retain, nonatomic) AKSignature *selectedSignature; // ivar: _selectedSignature
@property (readonly) NSArray *signatures;


-(BOOL)_createNewKeychainItemWithSignature:(id)arg0 ;
-(BOOL)_deleteSignatureFromKeychain:(id)arg0 ;
-(id)_createAKSignatureFromItemRef:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)_loadSignaturesFromPersistentStorage;
-(void)_migrateLegacySignaturesFromPreviewContainer;
-(void)_saveSignatureToPersistentStorage:(id)arg0 ;
-(void)insertObject:(id)arg0 inSignaturesAtIndex:(NSUInteger)arg1 ;
-(void)reloadSignaturesFromSource;
-(void)removeObjectFromSignaturesAtIndex:(NSUInteger)arg0 ;


@end


#endif