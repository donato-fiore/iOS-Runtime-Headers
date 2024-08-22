// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBHISTORYITEMPRIVATE_H
#define WEBHISTORYITEMPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebHistoryItemPrivate : NSObject {
    RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> _historyItem;
    CGFloat _lastVisitedTime;
    unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> _redirectURLs;
}






@end


#endif