// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGURLCONTAINER_H
#define SGURLCONTAINER_H

@class NSMutableArray;
@protocol SGExternalEnrichment;

#import <Foundation/Foundation.h>


@interface SGURLContainer : NSObject <SGExternalEnrichment>

 {
    NSMutableArray *_urls;
    BOOL _needsFlushing;
}




+(BOOL)deleteAllURLsWithBundleIdentifier:(id)arg0 documentIdentifiers:(id)arg1 entityStore:(id)arg2 ;
+(BOOL)deleteAllURLsWithBundleIdentifier:(id)arg0 domainSelection:(id)arg1 entityStore:(id)arg2 ;
+(BOOL)deleteAllURLsWithBundleIdentifier:(id)arg0 entityStore:(id)arg1 ;
+(id)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 bundleIdentifier:(id)arg2 entityStore:(id)arg3 ;
-(id)init;
-(id)numberOfExtractions;
-(void)dealloc;
-(void)flushWrites;
-(void)writeWithEntityStore:(id)arg0 ;


@end


#endif