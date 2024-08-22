// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTACHPARAMS_H
#define DIATTACHPARAMS_H

@class NSString;


#import "DIBaseParams.h"
#import "DIStatFS.h"

@interface DIAttachParams : DIBaseParams

@property BOOL autoMount; // ivar: _autoMount
@property (nonatomic) NSUInteger commandSize; // ivar: _commandSize
@property (nonatomic) NSInteger fileMode; // ivar: _fileMode
@property (nonatomic) BOOL handleRefCount; // ivar: _handleRefCount
@property (copy, nonatomic) NSString *inputMountedFrom; // ivar: _inputMountedFrom
@property (retain, nonatomic) DIStatFS *inputStatFS; // ivar: _inputStatFS
@property (nonatomic) BOOL onDiskCache; // ivar: _onDiskCache
@property (nonatomic) BOOL quarantine; // ivar: _quarantine
@property (nonatomic) NSUInteger rawBlockSize;
@property (nonatomic) NSUInteger regEntryID; // ivar: _regEntryID
@property (readonly, nonatomic) BOOL requiresRootDaemon;
@property (nonatomic) BOOL uniqueDevice; // ivar: _uniqueDevice


+(BOOL)copyWithURL:(id)arg0 outURLStr:(char *)arg1 maxLen:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)reOpenIfWritableWithError:(*id)arg0 ;
-(BOOL)updateStatFSWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExistingParams:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 shadowURLs:(id)arg1 error:(*id)arg2 ;
-(id)newAttachWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupDefaults;


@end


#endif