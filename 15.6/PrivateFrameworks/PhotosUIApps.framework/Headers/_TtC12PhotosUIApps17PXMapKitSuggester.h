// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12PHOTOSUIAPPS17PXMAPKITSUGGESTER_H
#define _TTC12PHOTOSUIAPPS17PXMAPKITSUGGESTER_H

@protocol MKLocalSearchCompleterDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps17PXMapKitSuggester : NSObject <MKLocalSearchCompleterDelegate>

 {
    ? $__lazy_storage_$_searchCompleter;
    ? input;
    ? completion;
    ? coordinateRegion;
}




-(id)init;
-(void)completer:(id)arg0 didFailWithError:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg0 ;


@end


#endif