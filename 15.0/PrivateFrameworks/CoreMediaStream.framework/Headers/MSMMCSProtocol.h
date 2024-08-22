// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSMMCSPROTOCOL_H
#define MSMMCSPROTOCOL_H

@class NSString;
@protocol MSStorageProtocol;

#import <Foundation/Foundation.h>


@interface MSMMCSProtocol : NSObject <MSStorageProtocol>

 {
    NSString *_MMCSDirPath;
    NSString *_engineDirPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *_mmcs_engine engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;


+(id)computeItemIDForAsset:(id)arg0 ;
-(id)_getUTIFromItem:(NSUInteger)arg0 ;
-(id)initWithPersonID:(id)arg0 path:(id)arg1 ;
-(int)_getFileDescriptorFromItem:(NSUInteger)arg0 ;
-(void)_getItemDone:(NSUInteger)arg0 path:(id)arg1 error:(id)arg2 ;
-(void)_putItemDone:(NSUInteger)arg0 putReceipt:(id)arg1 error:(id)arg2 ;
-(void)_requestCompleted;
-(void)abort;
-(void)deactivate;
-(void)deactivateRemoveAllFiles:(BOOL)arg0 ;
-(void)dealloc;
-(void)didFinishUsingAssets:(id)arg0 ;


@end


#endif