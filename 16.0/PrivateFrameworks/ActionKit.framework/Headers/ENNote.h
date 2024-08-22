// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENNOTE_H
#define ENNOTE_H

@class NSMutableArray, NSString, NSDate, NSDictionary, NSArray;
@protocol WFNaming;

#import <Foundation/Foundation.h>

#import "ENNoteContent.h"
#import "EDAMNote.h"

@interface ENNote : NSObject <WFNaming>

 {
    NSMutableArray *_resources;
}


@property (copy, nonatomic) NSString *cachedENMLContent; // ivar: _cachedENMLContent
@property (retain, nonatomic) ENNoteContent *content; // ivar: _content
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDictionary *edamAttributes; // ivar: _edamAttributes
@property (nonatomic) BOOL isReminder; // ivar: _isReminder
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSArray *resources;
@property (retain, nonatomic) EDAMNote *serviceNote; // ivar: _serviceNote
@property (copy, nonatomic) NSString *sourceUrl; // ivar: _sourceUrl
@property (copy, nonatomic) NSArray *tagNames; // ivar: _tagNames
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *wfName;


-(BOOL)validateForLimits;
-(id)EDAMNote;
-(id)EDAMNoteToReplaceServiceNoteGUID:(id)arg0 ;
-(id)enmlContent;
-(id)generateENMLContent;
-(id)init;
-(id)initWithServiceNote:(id)arg0 ;
-(void)addResource:(id)arg0 ;
-(void)generateHTMLData:(id)arg0 ;
-(void)generateWebArchiveData:(id)arg0 ;
-(void)invalidateCachedENML;
-(void)removeAllResources;


@end


#endif