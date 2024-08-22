// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCHECKSUMVERSIONSITEM_H
#define CALDAVCHECKSUMVERSIONSITEM_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}




-(BOOL)supportsVersion:(id)arg0 ;
-(id)copyParseRules;
-(id)init;
-(void)addVersionSupported:(id)arg0 ;


@end


#endif