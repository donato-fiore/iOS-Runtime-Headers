// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLEMETADATA_H
#define FCARTICLEMETADATA_H

@class NSString, NSDictionary, NSDate;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface FCArticleMetadata : NSObject <FCHeadlineMetadata>



@property (readonly, nonatomic) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTreatedAsNew;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif