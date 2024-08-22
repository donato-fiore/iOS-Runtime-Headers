// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSHAREDASSETSCONTAINERINCREMENTALCHANGEHIGHLIGHTCONTAINERCHANGE_H
#define PLSHAREDASSETSCONTAINERINCREMENTALCHANGEHIGHLIGHTCONTAINERCHANGE_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *destinationHighlightURI; // ivar: _destinationHighlightURI
@property (retain, nonatomic) NSString *relationshipKey; // ivar: _relationshipKey
@property (retain, nonatomic) NSURL *sourceHighlightURI; // ivar: _sourceHighlightURI


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif