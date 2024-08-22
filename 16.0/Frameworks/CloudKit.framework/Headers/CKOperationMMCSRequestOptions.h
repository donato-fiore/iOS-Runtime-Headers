// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKOPERATIONMMCSREQUESTOPTIONS_H
#define CKOPERATIONMMCSREQUESTOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL chunkingLibraryCorruptionMode; // ivar: _chunkingLibraryCorruptionMode
@property (nonatomic) BOOL insufficientDiskSpaceMode; // ivar: _insufficientDiskSpaceMode
@property (nonatomic) BOOL resumableContainerLimpMode; // ivar: _resumableContainerLimpMode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif