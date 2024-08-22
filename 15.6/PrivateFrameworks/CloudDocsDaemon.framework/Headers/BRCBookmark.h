// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCBOOKMARK_H
#define BRCBOOKMARK_H

@class NSData;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCAppLibrary.h"
#import "BRCLocalItem.h"
#import "BRCServerZone.h"
#import "BRCRelativePath.h"

@interface BRCBookmark : NSObject {
    BRCAccountSession *_session;
    BRCAppLibrary *_appLibrary;
    NSData *_bookmarkData;
    BRCLocalItem *_target;
    BRCServerZone *_targetServerZone;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
    BOOL _dataResolved;
    BOOL _containsItemID;
}


@property (readonly, nonatomic) BOOL containsItemID;
@property (readonly, nonatomic) BRCLocalItem *target;
@property (readonly, nonatomic) BRCServerZone *targetServerZone;


+(id)createName;
+(void)unlinkAliasAtPath:(id)arg0 ;
-(BOOL)_resolveDataWithError:(*id)arg0 ;
-(BOOL)_resolveTargetWithError:(*id)arg0 ;
-(BOOL)resolveWithError:(*id)arg0 ;
-(id)initWithRelpath:(id)arg0 ;
-(id)initWithTarget:(id)arg0 owningAppLibrary:(id)arg1 path:(id)arg2 session:(id)arg3 ;
-(id)writeUnderParent:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(int)_validateSignatureWithFd:(int)arg0 ;
-(void)_computeSignature:(unsigned char)arg0 ;


@end


#endif