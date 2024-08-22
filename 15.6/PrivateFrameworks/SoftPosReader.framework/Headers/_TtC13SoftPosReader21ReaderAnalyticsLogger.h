// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER21READERANALYTICSLOGGER_H
#define _TTC13SOFTPOSREADER21READERANALYTICSLOGGER_H

@class TtC13SoftPosReader8CALogger;



@interface _TtC13SoftPosReader21ReaderAnalyticsLogger : TtC13SoftPosReader8CALogger {
    ? cardReadReadyEvent;
    ? cardReadDetectedEvent;
    ? cardReadCancelledEvent;
    ? cardReadClosedAndRemovedEvent;
    ? cardReadEventPollingStartTime;
    ? cardReadEventSwitchStartTime;
    ? cardReadEventStartTime;
    ? cardReadReadyEventAppletVersion;
    ? cardReadReadyEventGlobalConfigID;
    ? cardReadReadyEventModelType;
    ? cardReadReadyEventPollingTime;
    ? cardReadReadyEventProfileID;
    ? cardReadReadyEventReaderMode;
    ? cardReadReadyEventCurrencyCode;
    ? cardReadReadyEventTrxType;
    ? cardReadReadyEventSwitchTime;
    ? cardReadDetectedEventApplicationLabel;
    ? cardReadDetectedEventApplicationID;
    ? cardReadDetectedEventCVM;
    ? cardReadDetectedEventFormFactor;
    ? cardReadDetectedEventKernelID;
    ? cardReadDetectedEventTerminalCountryCode;
    ? cardReadDetectedEventTVR;
    ? cardReadDetectedEventErrorIndication;
    ? cardReadDetectedEventOutcomeParameterSet;
    ? cardReadCancelledEventTimeoutReadPayment;
    ? cardReadCancelledEventTimeoutReadVAS;
    ? cardReadCancelledEventCancelTime;
    ? cardReadClosedAndRemovedEventTotalReadTime;
    ? cardReadClosedAndRemovedEventPayReadTime;
    ? cardReadClosedAndRemovedEventVasReadTime;
    ? cardReadClosedAndRemovedEventVasError;
    ? cardReadClosedAndRemovedEventTrackError;
    ? cardReadClosedAndRemovedEventTearingCount;
    ? cardReadClosedAndRemovedEventReaderMode;
    ? cardReadClosedAndRemovedEventReaderError;
    ? cardReadClosedAndRemovedEventThermalIndication;
    ? _pollingStartTime;
    ? _switchStartTime;
    ? _startTime;
    ? _payDetectTime;
    ? _vasDetectTime;
    ? _timeoutPay;
    ? _timeoutVAS;
    ? _vasEndTime;
    ? _vasError;
    ? _trackError;
    ? tearingCount;
    ? isThermalIndication;
    ? profileID;
    ? errorIndication;
    ? outcomeParameterSet;
    ? payReadEndTime;
    ? timeKeeper;
}






@end


#endif