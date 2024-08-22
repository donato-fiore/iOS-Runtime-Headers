// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCARTICLECONTENT_H
#define FCARTICLECONTENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCANFContent.h"
#import "FCWebContent.h"

@interface FCArticleContent : NSObject

@property (retain, nonatomic) FCANFContent *anfContent; // ivar: _anfContent
@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (retain, nonatomic) FCWebContent *webContent; // ivar: _webContent


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithArticleID:(id)arg0 anfContent:(id)arg1 ;
-(id)initWithArticleID:(id)arg0 contentType:(NSUInteger)arg1 ;
-(id)initWithArticleID:(id)arg0 webContent:(id)arg1 ;
-(id)initWithContext:(id)arg0 articleRecord:(id)arg1 ;


@end


#endif