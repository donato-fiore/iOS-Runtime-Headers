// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKREFERENCENODE_H
#define SKREFERENCENODE_H

@class NSURL, NSString;


#import "SKNode.h"

@interface SKReferenceNode : SKNode {
    NSURL *_referenceURL;
    NSString *_referenceFileName;
    SKNode *_resolvedNode;
    BOOL _hasResolvedURL;
}


@property (retain, nonatomic) NSString *referenceFileName;
@property (retain, nonatomic) NSURL *referenceURL;


+(BOOL)supportsSecureCoding;
+(id)nodeWithFileNamed:(id)arg0 ;
+(id)referenceNodeWithFileNamed:(id)arg0 ;
+(id)referenceNodeWithURL:(id)arg0 ;
-(id)_resolveReferenceNode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)resolvedNode;
-(void)didLoadReferenceNode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveNodeFromArchiveData:(id)arg0 ;
-(void)resolveReferenceNode;


@end


#endif