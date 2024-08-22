// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWITEMEDITEDCOPY_H
#define QLPREVIEWITEMEDITEDCOPY_H

@class NSURL, FPSandboxingURLWrapper, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *createdContainerTemporaryURL;
@property (retain, nonatomic) FPSandboxingURLWrapper *directoryURLWrapper; // ivar: _directoryURLWrapper
@property (readonly, nonatomic) NSString *outputURLContentType;
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) FPSandboxingURLWrapper *urlWrapper; // ivar: _urlWrapper
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)containerStillExists;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEditedCopyURL:(id)arg0 ;
-(id)initWithEditedCopyURL:(id)arg0 createdContainerTemporaryURL:(id)arg1 ;
-(void)bumpVersion;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFromDisk;


@end


#endif