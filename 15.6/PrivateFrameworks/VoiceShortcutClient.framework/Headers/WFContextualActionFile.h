// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTEXTUALACTIONFILE_H
#define WFCONTEXTUALACTIONFILE_H

@class NSURL, UTType;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionFile : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) UTType *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 type:(id)arg1 ;
-(void)dispose;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif